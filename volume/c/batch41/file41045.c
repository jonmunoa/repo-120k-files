// fichero 41045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41045;

Registro41045 crear_registro41045(int id) {
    Registro41045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
