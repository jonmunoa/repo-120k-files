// fichero 21865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21865;

Registro21865 crear_registro21865(int id) {
    Registro21865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
