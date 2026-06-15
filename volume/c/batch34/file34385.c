// fichero 34385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34385;

Registro34385 crear_registro34385(int id) {
    Registro34385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
