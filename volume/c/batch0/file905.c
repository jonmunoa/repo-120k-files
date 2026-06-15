// fichero 905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro905;

Registro905 crear_registro905(int id) {
    Registro905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
