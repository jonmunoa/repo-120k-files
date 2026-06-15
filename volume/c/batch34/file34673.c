// fichero 34673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34673;

Registro34673 crear_registro34673(int id) {
    Registro34673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
