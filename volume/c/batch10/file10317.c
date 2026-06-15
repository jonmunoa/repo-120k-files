// fichero 10317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10317;

Registro10317 crear_registro10317(int id) {
    Registro10317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
