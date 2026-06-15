// fichero 35781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35781;

Registro35781 crear_registro35781(int id) {
    Registro35781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
