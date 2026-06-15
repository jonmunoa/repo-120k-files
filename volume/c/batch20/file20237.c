// fichero 20237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20237;

Registro20237 crear_registro20237(int id) {
    Registro20237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
