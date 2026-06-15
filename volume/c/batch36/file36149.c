// fichero 36149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36149;

Registro36149 crear_registro36149(int id) {
    Registro36149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
