// fichero 38865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38865;

Registro38865 crear_registro38865(int id) {
    Registro38865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
