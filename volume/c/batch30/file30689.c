// fichero 30689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30689;

Registro30689 crear_registro30689(int id) {
    Registro30689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
