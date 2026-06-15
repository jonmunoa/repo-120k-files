// fichero 36897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36897;

Registro36897 crear_registro36897(int id) {
    Registro36897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
