// fichero 9353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9353;

Registro9353 crear_registro9353(int id) {
    Registro9353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
