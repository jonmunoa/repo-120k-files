// fichero 41633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41633;

Registro41633 crear_registro41633(int id) {
    Registro41633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
