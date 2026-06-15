// fichero 19333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19333;

Registro19333 crear_registro19333(int id) {
    Registro19333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
