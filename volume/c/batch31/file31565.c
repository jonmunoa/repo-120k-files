// fichero 31565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31565;

Registro31565 crear_registro31565(int id) {
    Registro31565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
