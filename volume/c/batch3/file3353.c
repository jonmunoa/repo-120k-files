// fichero 3353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3353;

Registro3353 crear_registro3353(int id) {
    Registro3353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
