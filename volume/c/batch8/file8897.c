// fichero 8897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8897;

Registro8897 crear_registro8897(int id) {
    Registro8897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
