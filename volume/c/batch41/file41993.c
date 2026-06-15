// fichero 41993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41993;

Registro41993 crear_registro41993(int id) {
    Registro41993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
