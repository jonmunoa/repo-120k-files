// fichero 36109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36109;

Registro36109 crear_registro36109(int id) {
    Registro36109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
