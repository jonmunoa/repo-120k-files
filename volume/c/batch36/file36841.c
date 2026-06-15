// fichero 36841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36841;

Registro36841 crear_registro36841(int id) {
    Registro36841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
