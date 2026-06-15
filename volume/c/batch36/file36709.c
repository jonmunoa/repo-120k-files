// fichero 36709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36709;

Registro36709 crear_registro36709(int id) {
    Registro36709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
