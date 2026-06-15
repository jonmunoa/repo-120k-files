// fichero 30145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30145;

Registro30145 crear_registro30145(int id) {
    Registro30145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
