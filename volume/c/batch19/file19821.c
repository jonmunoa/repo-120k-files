// fichero 19821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19821;

Registro19821 crear_registro19821(int id) {
    Registro19821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
