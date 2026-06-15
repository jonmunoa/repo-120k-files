// fichero 36869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36869;

Registro36869 crear_registro36869(int id) {
    Registro36869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
