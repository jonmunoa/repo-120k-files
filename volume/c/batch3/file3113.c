// fichero 3113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3113;

Registro3113 crear_registro3113(int id) {
    Registro3113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
