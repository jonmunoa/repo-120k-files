// fichero 3569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3569;

Registro3569 crear_registro3569(int id) {
    Registro3569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
