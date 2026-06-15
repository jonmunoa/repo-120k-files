// fichero 19661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19661;

Registro19661 crear_registro19661(int id) {
    Registro19661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
