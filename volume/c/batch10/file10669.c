// fichero 10669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10669;

Registro10669 crear_registro10669(int id) {
    Registro10669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
