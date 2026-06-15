// fichero 3781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3781;

Registro3781 crear_registro3781(int id) {
    Registro3781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
