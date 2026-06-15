// fichero 36861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36861;

Registro36861 crear_registro36861(int id) {
    Registro36861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
