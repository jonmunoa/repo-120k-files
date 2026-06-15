// fichero 41477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41477;

Registro41477 crear_registro41477(int id) {
    Registro41477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
