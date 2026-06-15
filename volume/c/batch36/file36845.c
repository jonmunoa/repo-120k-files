// fichero 36845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36845;

Registro36845 crear_registro36845(int id) {
    Registro36845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
