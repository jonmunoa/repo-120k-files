// fichero 15917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15917;

Registro15917 crear_registro15917(int id) {
    Registro15917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
