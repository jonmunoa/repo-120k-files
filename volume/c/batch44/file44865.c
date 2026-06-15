// fichero 44865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44865;

Registro44865 crear_registro44865(int id) {
    Registro44865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
