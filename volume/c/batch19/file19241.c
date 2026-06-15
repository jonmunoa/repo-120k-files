// fichero 19241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19241;

Registro19241 crear_registro19241(int id) {
    Registro19241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
