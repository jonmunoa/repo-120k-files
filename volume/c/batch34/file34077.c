// fichero 34077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34077;

Registro34077 crear_registro34077(int id) {
    Registro34077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
