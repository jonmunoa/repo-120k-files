// fichero 30085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30085;

Registro30085 crear_registro30085(int id) {
    Registro30085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
