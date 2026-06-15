// fichero 6577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6577;

Registro6577 crear_registro6577(int id) {
    Registro6577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
