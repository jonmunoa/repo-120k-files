// fichero 34753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34753;

Registro34753 crear_registro34753(int id) {
    Registro34753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
