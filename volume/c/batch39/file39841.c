// fichero 39841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39841;

Registro39841 crear_registro39841(int id) {
    Registro39841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
