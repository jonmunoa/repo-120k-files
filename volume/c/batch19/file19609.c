// fichero 19609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19609;

Registro19609 crear_registro19609(int id) {
    Registro19609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
