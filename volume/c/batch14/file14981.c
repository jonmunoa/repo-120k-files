// fichero 14981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14981;

Registro14981 crear_registro14981(int id) {
    Registro14981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
