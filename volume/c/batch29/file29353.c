// fichero 29353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29353;

Registro29353 crear_registro29353(int id) {
    Registro29353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
