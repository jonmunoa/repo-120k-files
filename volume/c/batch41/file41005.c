// fichero 41005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41005;

Registro41005 crear_registro41005(int id) {
    Registro41005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
