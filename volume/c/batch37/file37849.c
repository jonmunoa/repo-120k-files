// fichero 37849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37849;

Registro37849 crear_registro37849(int id) {
    Registro37849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
