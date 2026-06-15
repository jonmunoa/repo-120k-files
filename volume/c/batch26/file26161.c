// fichero 26161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26161;

Registro26161 crear_registro26161(int id) {
    Registro26161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
