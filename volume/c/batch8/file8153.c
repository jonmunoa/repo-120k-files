// fichero 8153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8153;

Registro8153 crear_registro8153(int id) {
    Registro8153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
