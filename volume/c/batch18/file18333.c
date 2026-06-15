// fichero 18333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18333;

Registro18333 crear_registro18333(int id) {
    Registro18333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
