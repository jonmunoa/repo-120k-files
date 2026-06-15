// fichero 36753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36753;

Registro36753 crear_registro36753(int id) {
    Registro36753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
