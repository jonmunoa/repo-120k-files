// fichero 21953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21953;

Registro21953 crear_registro21953(int id) {
    Registro21953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
