// fichero 3161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3161;

Registro3161 crear_registro3161(int id) {
    Registro3161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
