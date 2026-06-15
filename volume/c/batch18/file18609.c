// fichero 18609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18609;

Registro18609 crear_registro18609(int id) {
    Registro18609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
