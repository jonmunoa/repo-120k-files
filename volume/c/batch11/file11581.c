// fichero 11581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11581;

Registro11581 crear_registro11581(int id) {
    Registro11581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
