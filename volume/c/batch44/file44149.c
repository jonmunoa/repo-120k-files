// fichero 44149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44149;

Registro44149 crear_registro44149(int id) {
    Registro44149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
