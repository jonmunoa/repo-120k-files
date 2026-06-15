// fichero 36557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36557;

Registro36557 crear_registro36557(int id) {
    Registro36557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
