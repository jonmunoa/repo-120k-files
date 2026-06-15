// fichero 16277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16277;

Registro16277 crear_registro16277(int id) {
    Registro16277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
